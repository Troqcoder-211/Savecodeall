import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Random;
import javax.swing.JOptionPane;

public class hellobasic {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        // USER INPUT

        // System.out.print("What's your name : ");
        // String name = scanner.nextLine();
        // System.out.print("How old are you : ");
        // int age = scanner.nextInt();
        // System.out.println("My name : " + name);
        // System.out.println("My age : " + age);

        // GRAPHICAL USER INTERFACE (GUI)

        // String name = JOptionPane.showInputDialog("Enter your name : ");
        // JOptionPane.showMessageDialog(null, "Hello " + name);

        // int age = Integer.parseInt(JOptionPane.showInputDialog("Enter age : "));
        // JOptionPane.showMessageDialog(null, "My age " + age + " years old ");

        // double height = Double.parseDouble(JOptionPane.showInputDialog("Enter height
        // : "));
        // JOptionPane.showMessageDialog(null, "My age " + height + " years old ");

        // MATH CLASS

        // double x = 31.1221;
        // double y = -3.14;
        // double k = 25;

        // double z = Math.abs(y);
        // double max = Math.max(x, y);
        // double min = Math.min(x, y);
        // double sqrt = Math.sqrt(k);

        // System.out.println(" Tri tuyet doi : " + z);
        // System.out.println(" Max : " + max);
        // System.out.println(" Min : " + min);
        // System.out.println(" Can bac hai : " + sqrt);

        // RAMDOM

        // Random random = new Random();
        // int x = random.nextInt(100);
        // double y = random.nextDouble();
        // boolean bool = random.nextBoolean();
        // System.out.println("Gia tri cua random INT : " + x);
        // System.out.println("Gia tri cua random DOUBLE : " + y);
        // System.out.println("Gia tri cua random BOOLEN : " + bool);

        // ĐIỀU KIỆN
        // (if else)

        // System.out.print("Enter age : ");
        // int age = scanner.nextInt();

        // if (age >= 60) {
        // System.out.println(" old ");
        // } else if (age >= 18) {
        // System.out.println(" young ");
        // } else {
        // System.out.println(" children ");
        // }

        // switch case

        // System.out.print(" Enter month : ");
        // int month = scanner.nextInt();
        // switch (month) {
        // case 1:
        // System.out.println(" January ");
        // break;
        // case 2:
        // System.out.println(" February ");
        // break;
        // case 3:
        // System.out.println(" March ");
        // break;
        // case 4:
        // System.out.println(" April ");
        // break;
        // case 5:
        // System.out.println(" May ");
        // break;
        // case 6:
        // System.out.println(" June ");
        // break;
        // case 7:
        // System.out.println(" July ");
        // break;
        // case 8:
        // System.out.println(" August ");
        // break;
        // case 9:
        // System.out.println(" September ");
        // break;
        // case 10:
        // System.out.println(" October ");
        // break;
        // case 11:
        // System.out.println(" November ");
        // break;
        // case 12:
        // System.out.println(" December ");
        // break;
        // default:
        // System.out.print("Month valid ");
        // break;
        // }

        // LOGICAL OPERATION ( &&=AND ||=OR !=NOT )

        // LOOP ( FOR , WHILE ,DO WHILE ,FOR EACH )

        // ARRAY

        // 1 dimensional array
        // String[] cars = { "ROLL", "PORSCHE", "MESBEN" };
        // cars[0] = "LEXUS";
        // System.out.print(cars[0]);

        // String[] laptops = new String[3];
        // laptops[0] = "Asus";
        // laptops[1] = "Macbook";
        // laptops[2] = "Msi";

        // for (int i = 0; i < 3; i++) {
        // System.out.println(laptops[i]);
        // }
        // 2-dimensional arrays
        // String[][] VGA = { { "1060", "1080", "1080Ti" },
        // { "3050", "3060", "3060Ti" },
        // { "4080", "4090", "4090Ti" } };
        // for (int i = 0; i < VGA.length; i++) {
        // for (int j = 0; j < VGA[i].length; j++) {
        // System.out.print(VGA[i][j] + " ");
        // }
        // System.out.println("");
        // }

        // String[][] chip = new String[3][3];
        // chip[0][0] = "intel i5 10500f ";
        // chip[0][1] = "intel i5 11400f ";
        // chip[0][2] = "intel i5 12500f ";
        // chip[1][0] = "intel i7 10500f ";
        // chip[1][1] = "intel i7 11400f ";
        // chip[1][2] = "intel i7 12500f";
        // chip[2][0] = "intel i9 10500f";
        // chip[2][1] = "intel i5 11400f";
        // chip[2][2] = "intel i5 12500f";

        // for (int i = 0; i < chip.length; i++) {
        // for (int j = 0; j < chip[i].length; j++) {
        // System.out.print(chip[i][j] + " ");
        // }
        // System.out.println("");
        // }

        // STRING METHOD
        // String name = "Trong";
        // boolean result = name.equalsIgnoreCase("Tr")
        // int result = name.length();
        // char result = name.charAt(0);
        // int result = name.indexOf("o");
        // boolean result = name.isEmpty();
        // String result = name.toUpperCase();
        // String result = name.toLowerCase();
        // String result = name.trim();
        // String result = name.replace("o", "a");
        // System.out.println(result);

        // Array List
        // ArrayList<String> food = new ArrayList<String>();
        // food.add("pizza");
        // food.add("hamburger");
        // food.add("fried chicken");

        // food.set(0, "sushi");
        // food.remove(2);
        // for (int i = 0; i < food.size(); i++) {
        // System.out.println(food.get(i));
        // }

        // 2D Array List

        // ArrayList<ArrayList<String>> All = new ArrayList();

        // ArrayList<String> bakery = new ArrayList<String>();
        // bakery.add("panacosta");
        // bakery.add("tiramisu");
        // bakery.add("donus");

        // ArrayList<String> fruits = new ArrayList<String>();
        // fruits.add("tomato");
        // fruits.add("apple");
        // fruits.add("lemon");

        // ArrayList<String> drinks = new ArrayList<String>();
        // drinks.add("soda");
        // drinks.add("coca");
        // drinks.add("milktea");

        // All.add(bakery);
        // All.add(fruits);
        // All.add(drinks);

        // System.out.println(All);
        // System.out.println(All.get(2));
        // System.out.println(All.get(2).get(1));

        // FOR-EACH
        // String[] animals = { "cat", "dog", "pig", "bird" };
        // ArrayList<String> animals = new ArrayList<String>();
        // animals.add("cat");
        // animals.add("dog");
        // animals.add("elephant");
        // animals.add("cheetah");
        // for (String i : animals) {
        // System.out.println(i);
        // }

        // METHOD
        // String name = "Nguyen Thanh Trong ";
        // int age = 19;
        // hello(name, age);
        // OVERLAODED METHODS
        // int a, b, c, d;
        // a = 4;
        // b = 9;
        // c = 10;
        // d = 15;
        // System.out.println("This overloads methods #1 :" + sum(a, b));
        // System.out.println("This overloads methods #2 :" + sum(a, c, d));
        // System.out.println("This overloads methods #3 :" + sum(a, b, c, d));
        // System.out.print(" nhap a: ");
        // a = scanner.nextInt();
        // System.out.print(" nhap b: ");
        // b = scanner.nextInt();
        // System.out.println("tong a va b là : " + sum(a, b));

        // printf() = an optional method to control , format , and display text to the
        // console window
        // two agument = format string +(object/variable/value)
        // %[flag] [precision] [width] [conversion-character]
        // boolean myBoolean = true;
        // char myChar = '@';
        // String myString = "Bro";
        // int myInt = 50;
        // double myDouble = 3.1415;

        // [conversion-character]
        // System.out.printf("%b\n", myBoolean);
        // System.out.printf("%c\n", myChar);
        // System.out.printf("%s\n", myString);
        // System.out.printf("%d\n", myInt);
        // System.out.printf("%f\n", myDouble);

        // [width]
        // minimum number of characters to be written as output
        // System.out.printf("hello %s", myString);

        // [precision]
        // sets number of digits of precision when outputting float-point values
        // System.out.printf("You have this much money %f", myDouble);

        // [flags]
        // adds an effect to output based on the flag added to format specifier
        // - : left - justify
        // + : ouput a plus ( + ) or minus ( - ) sign for a numeric value
        // 0 : numeric values are zero - padded
        // , : comma grouping separater if number > 1000
        // final double
        // final double PI = 3.14159;
        // System.out.printf("PI = %f\n", PI);

    }

    static void hello(String name, int age) {
    System.out.println("hello " + name + "\n" + "your age " + age);
    }

    OVERLAODED METHODS
    static int sum(int a, int b) {
    return a + b;
    }

    static int sum(int a, int b, int c) {
    return a + b + c;
    }

    static int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}
