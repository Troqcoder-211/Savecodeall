import java.util.Scanner;

public class Cat implements animals {
    Scanner scanner = new Scanner(System.in);

    public void an() {
        System.out.print("nhap ten thuc an cua meo ");
        String thucan = scanner.nextLine();
        System.out.println("meo dang an" + thucan);
    }
}
