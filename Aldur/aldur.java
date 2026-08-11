package org.example;

import java.util.Scanner;

public class aldur {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int youngestFriend = s.nextInt();

        for (int i = 1; i < n; i++) {
            int a = s.nextInt();

            if (a < youngestFriend) {
                youngestFriend = a;
            }
        }

        System.out.println(youngestFriend);
    }
}
