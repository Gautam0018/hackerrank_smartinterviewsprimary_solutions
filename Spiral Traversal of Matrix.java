import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int t=s.nextInt();
        while(t-->0){
            int n=s.nextInt();
            int [][]arr=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=s.nextInt();
                }
            }
            
            int left=0,right=n-1,top=0,down=n-1;
            int d=0;
            while(top<=down && left<=right){
                if(d==0){
                    for(int i=left;i<=right;i++){
                        System.out.print(arr[top][i]+" ");
                      
                    }
                      top++;
                }
                else if(d==1){
                    for(int i=top;i<=down;i++){
                        System.out.print(arr[i][right]+" ");
                          
                    }
                      right--;
                }
                else if(d==2){
                    for(int i=right;i>=left;i--){
                        System.out.print(arr[down][i]+" ");
                            
                    }
                    down--;
                }
                else{
                    for(int i=down;i>=top;i--){
                        System.out.print(arr[i][left]+" ");
                        
                    }
                    left++;
                }
                d=(d+1)%4;
            }
            System.out.println();
        }
    }
}
