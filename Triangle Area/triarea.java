package org.example;

import java.util.Scanner;

public class triarea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double h = scanner.nextInt();
        double b = scanner.nextInt();
        System.out.println(h * b / 2);
    }
}
