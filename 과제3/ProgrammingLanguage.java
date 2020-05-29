import java.util.Random;

public class ProgrammingLanguage {
    static int staticMatrix1[][] = new int [100][100];
    static int staticMatrix2[][] = new int [100][100];
    static int staticMatrix3[][] = new int [100][100];

    public static void localMatrices(){
        int i,j,sum,k;
        Random r = new Random();

        int localMatrix1[][] = new int [100][100];
        int localMatrix2[][] = new int [100][100];
        int localMatrix3[][] = new int [100][100];

        for(i = 0; i < 100 ; i++){
            for(j = 0; j < 100 ; j++) {
                localMatrix1[i][j] = r.nextInt(100);
                localMatrix2[i][j] = r.nextInt(100);
                staticMatrix1[i][j] = r.nextInt(100);
                staticMatrix2[i][j] = r.nextInt(100);
            }
        }
        long start = System.currentTimeMillis();

        for(i = 0; i < 100 ; i++){
            for(j = 0; j < 100 ; j++) {
                sum = 0;
                for(k = 0; k < 100 ; k++){
                    sum += staticMatrix1[i][k]*staticMatrix3[j][k];
                }
                staticMatrix3[i][j] = sum;
            }
        }
        long end = System.currentTimeMillis();

        System.out.println( "스택-정적 실행 시간 : " + ( end - start )/1000.0 );
        
        start = System.currentTimeMillis();

        for(i = 0; i < 100 ; i++){
            for(j = 0; j < 100 ; j++) {
                sum = 0;
                for(k = 0; k < 100 ; k++){
                    sum += localMatrix1[i][k]*localMatrix1[j][k];
                }
                localMatrix3[i][j] = sum;
            }
        }
        end = System.currentTimeMillis();

        System.out.println( "스택-동적 실행 시간 : " + ( end - start )/1000.0 );
    }

    public static void main(String[] args) {
        localMatrices();
    }
}
