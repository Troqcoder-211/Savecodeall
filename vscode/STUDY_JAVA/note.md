- Math.max(4,5)=> 5

- Math.min(4,5)=>4

- Math.sqrt(64)=> 8

- Math.abs(-4)=> 4

- random.nextInt()=> 2 4 6 72 23

equalsIgnoreCase() : So sánh hai chuỗi đưa ra dựa trên nội dung của chuỗi không phân biệt chữ hoa và chữ thường. Nếu hai chuỗi khác nhau nó trả về false. Nếu hai chuỗi bằng nhau nó trả về true.
public class EqualsExample {
public static void main(String args[]) {
String s1 = "java";
String s2 = "java";
String s3 = "JAVA";
String s4 = "python";
System.out.println(s1.equalsIgnoreCase(s2)); => true
System.out.println(s1.equalsIgnoreCase(s3)); => true
System.out.println(s1.equalsIgnoreCase(s4)); => false
}
}

String name =" ";
name.length() : dùng để do độ dài chuỗi name.length .
name.charAt(1) : dùng để tìm ký tự bất kì trong chuỗi .
name.indexOf("G") : dùng để tìm vị trí ký tự trong chuỗi .
name.isEmpty() : dùng để kiểm tra chuỗi rỗng .
name.toUpperCase() : dùng để In hoa chuỗi .
name.toLowerCase() : dùng để In thường chuỗi .
name.trim() : dùng để bỏ khoảng cách trước và sau chuỗi .
name.replace("o", "a") : dùng để thay thế ký tự .

## ARRAY LIST

ArrayList<String> food = new ArrayList<String>(); : Khai báo 1 ArrayList .
food.add : thêm vào ArrayList .
food.set(Index ,"String") : thay String vào Index .
food.remove(Index) : xóa Index trong Array List .

## 2D ARRAY LIST

ArrayList<ArrayList<String>> name = new ArratList();

System.out.println(name) : xuất tất cả phần tử mảng.
System.out.println(name.get(index)) : xuất 1 dòng của phần tử mảng .
System.out.println(name.get(index).get(index)) : xuất một phần tử có dòng cột mảng .

## METHOD

OVERLAODED METHODS : là hiện tượng nhiều phương thức có cùng tên, tuy nhiên số lượng tham số hoặc kiểu của tham số trong các phương thức này là khác nhau trong cùng 1 class hoặc trong xuyên suốt các class có quan hệ kế thừa.

## OOP \_ OBJECT_ORIENTED_PROGAMING

- Tính đa hình (Polymorphism)
- Tính kế thừa (Inheritance)
- Tính đóng gói (Escapsulation)
