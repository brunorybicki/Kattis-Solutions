import java.util.Scanner;

public class stockprices {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        StringBuilder output = new StringBuilder();

        for (int test = 0; test < t; test++) {
            int n = scanner.nextInt();

            int[] buyPrice = new int[n], buyShares = new int[n], sellPrice = new int[n], sellShares = new int[n];
            int buyCount = 0, sellCount = 0, stock = -1;

            for (int i = 0; i < n; i++) {
                String type = scanner.next();
                int x = scanner.nextInt();

                scanner.next();
                scanner.next();

                int y = scanner.nextInt();

                if (type.equals("buy")) {
                    buyPrice[buyCount] = y;
                    buyShares[buyCount] = x;
                    buyCount++;
                } else {
                    sellPrice[sellCount] = y;
                    sellShares[sellCount] = x;
                    sellCount++;
                }

                int bid, ask;

                while (true) {
                    bid = -1;
                    ask = -1;

                    for (int j = 0; j < buyCount; j++) {
                        if (buyShares[j] > 0 && (bid == -1 || buyPrice[j] > buyPrice[bid])) {
                            bid = j;
                        }
                    }

                    for (int j = 0; j < sellCount; j++) {
                        if (sellShares[j] > 0 && (ask == -1 || sellPrice[j] < sellPrice[ask])) {
                            ask = j;
                        }
                    }

                    if (bid == -1 || ask == -1 || buyPrice[bid] < sellPrice[ask]) {
                        break;
                    }

                    int shares = buyShares[bid];

                    if (sellShares[ask] < shares) {
                        shares = sellShares[ask];
                    }

                    buyShares[bid] -= shares;
                    sellShares[ask] -= shares;
                    stock = sellPrice[ask];
                }

                if (ask == -1) {
                    output.append("- ");
                } else {
                    output.append(sellPrice[ask]).append(" ");
                }

                if (bid == -1) {
                    output.append("- ");
                } else {
                    output.append(buyPrice[bid]).append(" ");
                }

                if (stock == -1) {
                    output.append("-\n");
                } else {
                    output.append(stock).append("\n");
                }
            }
        }

        System.out.print(output);
    }
}
