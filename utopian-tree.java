import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int sum = 0;
            int i = 0;
            while (i <= n) {
                if (i % 2 == 0) {
                    sum = sum + 1;
                } else if (i % 2 == 1) {
                    sum = sum * 2;
                }
                i++;
            }
            System.out.println(sum);
        }
    }
}
