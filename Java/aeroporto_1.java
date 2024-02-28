import java.util.Scanner;

public class aeroporto_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Insira a quantidade de passageiros:");
        int number_passengers = scanner.nextInt();

        System.out.println("Insira '1' caso tenha RG. Caso contrário, insira 'não':");
        int bool_passenger_have_rg = scanner.nextInt();

        if (bool_passenger_have_rg != 1) {
            System.out.println("a saída é nessa direção");
            System.exit(1);
        }

        System.out.println("Insira a sua data de nascimento no RG, neste formato: XX/XX/XXXX");
        String passenger_date_of_birth_on_rg = scanner.next();

        System.out.println("Insira '1' caso tenha passagem. Caso contrário, insira 'não'.");
        int bool_user_have_passage = scanner.nextInt();
\
        if (bool_user_have_passage != 1) {
            System.out.println("a recepção é nessa direção");
            System.exit(1);
        }

        System.out.println("Insira a data de nascimento na passagem, neste formato: XX/XX/XXXX");
        String passenger_date_of_birth_on_passage = scanner.next();

        if (!passenger_date_of_birth_on_passage.equals(passenger_date_of_birth_on_rg)) {
            System.out.println("190");
            System.exit(1);
        }

        System.out.println("Insira a poltrona na passagem, neste formato: X00 (X para Letra, 0 para Número).");
        String passenger_chair_on_passage = scanner.next();

        System.out.println("O seu assento é " + passenger_chair_on_passage + ". Tenha um ótimo dia.");
        
        scanner.close();
    }
}
