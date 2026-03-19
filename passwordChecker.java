import java.util.Scanner;

public static boolean isStrong(String password) {
    // Regex for: 8+ chars, at least one digit, one uppercase, and one lowercase letter
    String regex = "^(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z]).{8,}$";
    return password.matches(regex);
}

public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a = 0;
    do{
        System.out.println("Enter a password to check its strength (or type '0' to quit):");
        String input = scanner.nextLine();
        switch(String i){
            case "0";
                a = 0;
                break;
            default:
                if(isStrong(input)){
                    System.out.println("Strong password!");
                } else {
                    System.out.println("Weak password. Try again.");
                }
                a = 1;
                break;
        }
    }while(a != 0);
}