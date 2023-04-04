import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        while(t-->0){
            int n=s.nextInt();
            int [][] arr=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=s.nextInt();
                }
            }
            for(int j=n-1;j>=0;j--){
                int i=0;
                int a=j;
                int sum=0;
                while(a<=n-1){
                    sum+=arr[i][a];
                    a++;
                    i++;
                }
                System.out.print(sum+" ");
            }
            
            for(int j=1;j<n;j++){
                int i=0;
                int a=j;
                int su=0;
                while(a<=n-1){
                    su+=arr[a][i];
                    a++;
                    i++;
                }
                System.out.print(su+" ");
            }
            System.out.println();
            
        }
    }
}
