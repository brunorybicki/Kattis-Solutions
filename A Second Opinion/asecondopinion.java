package org.example;

import java.util.Scanner;

public class asecondopinion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int timeInSeconds = scanner.nextInt();

        int hours = timeInSeconds / 3600;
        int minutes = (timeInSeconds % 3600) / 60;
        int seconds = timeInSeconds % 60;

        System.out.printf("%d : %d : %d%n", hours, minutes, seconds);
    }
}
