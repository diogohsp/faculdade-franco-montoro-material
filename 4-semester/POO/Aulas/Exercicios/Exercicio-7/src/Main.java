public class Main {
    public static void main(String[] args) {

        for (int index = 0; index < 30; index++){
            String indexStr = index + "";
            String primeiraLetra = indexStr.substring(0,1);
            if(primeiraLetra.equals("1")){
                if(index % 4 == 0){
                    System.out.println(index);
                }
            }
        }
    }
}