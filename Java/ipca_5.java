import java.util.Scanner;

public class ipca_5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int int_number_ipcs_entered = 0;
        float average_ipca = 0;
        float highest_ipca = 0;
        String date_from_highest_ipca = "";
        float lowest_ipca = 10000;
        String date_from_lowest_ipca = "";

        while (true) {
            System.out.printf("Quantidade de entradas válidas: %d.\n", int_number_ipcs_entered);
            System.out.println("Insira o mês/ano (ex.: MM/AAAA) e o IPCA (ex.: XX.XX). Separe-os com espaço.");
            System.out.println("Insira * para cancelar.\nExemplo: 01/2000 05.00");

            String user_input = scanner.nextLine();
            user_input = user_input.trim();
            String[] inputParts = user_input.split(" ");
            
            if (inputParts[0].equals("*")) {
                break;
            }
            if (inputParts.length != 2 || inputParts[0].length() != 7 || inputParts[1].length() != 5) {
                System.out.println("Erro. Exemplo de estrutura correta: 01/2000 05.00");
                continue;
            }
            
            float user_input_ipca_float = Float.parseFloat(inputParts[1]);
            int_number_ipcs_entered++;
            
            if (user_input_ipca_float > highest_ipca) {
                highest_ipca = user_input_ipca_float;
                date_from_highest_ipca = inputParts[0];
            }
            if (user_input_ipca_float < lowest_ipca) {
                lowest_ipca = user_input_ipca_float;
                date_from_lowest_ipca = inputParts[0];
            }
            average_ipca += user_input_ipca_float;
        }

        String average_ipca_str = String.format("%.2f", average_ipca / int_number_ipcs_entered);
        System.out.printf("Menor IPCA = %.2f (%s)\n", lowest_ipca, date_from_lowest_ipca);
        System.out.printf("Maior IPCA = %.2f (%s)\n", highest_ipca, date_from_highest_ipca);
        System.out.printf("Média dos IPCA inseridos = %s.\n", average_ipca_str);
    
        scanner.close();
    }
}

