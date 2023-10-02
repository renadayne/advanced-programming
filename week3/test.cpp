#include <iostream>
using namespace std;
/* khởi tạo mảng và các biến cần thiết trong Queue */
int queue[100], n = 100, front = - 1, rear = - 1;
/* hàm thêm phần tử vào trong Queue */
void push() {
// khởi tạo biến val và đưa nó vào trong hàng đợi
   int val;
//xét điều kiện hàng đợi đầy, nếu đầy thì không thể thêm phần tử vào được
   if (rear == n - 1)
   cout<<"Tràn hàng đợi"<<endl;
//Ngược lại nếu trong hàng đợi vẫn còn chỗ trống thì ta thực hiện thêm phần tử
   else {
      if (front == - 1)
      front = 0;
      cout<<"Chèn phần tử vào hàng đợi : "<<endl;
      //yêu cầu nhập dữ liệu từ bàn phím
      cin>>val;
      //tăng vị trí hiện tại lên một
      rear++;
      //thêm phần tử đó vào vị trí hiện tại rear
      queue[rear] = val;
   }
}
/* hàm xóa phần tử khỏi Queue */
void pop() {
//nếu trong hàng đợi rỗng thì không thể xóa phần tử, ta thực hiện return và kết thúc hàm
   if (front == - 1 || front > rear) {
      cout<<"Không thể xóa phần tử trong hàng đợi ";
      return ;
   } 
//Ngược lại ta sẽ thực hiện lấy phần tử đó ra và xóa luôn khỏi hàng đợi
   else {
      cout<<"Phần tử đã xóa khỏi hàng đợi là: "<< queue[front] <<endl;
      front++;;
   }
}
/* hàm in các phần tử trong Queue ra màn hình */
void print() {
//nếu hàng đợi rỗng ta sẽ thông báo 
   if (front == - 1)
   cout<<"Hàng đợi rỗng!!"<<endl;
//Ngược lại nếu hàng đợi có phần tử thì ta sẽ xuất lần lượt các phần tử đó ra màn hình
   else {
      cout<<"Các phần tử trong hàng đợi là: ";
      //sử dụng vòng lặp for để xuất lần lượt các phần tử
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
/* hàm main để tạo menu và gọi các hàm đã tạo ở trên */
int main() {
   int ch;
   cout<<"1) Thêm phần tử vào Queue"<<endl;
   cout<<"2) Xóa phần tử khỏi Queue"<<endl;
   cout<<"3) Hiện thị tất cả các phần tử trong Queue"<<endl;
   cout<<"4) Thoát"<<endl;
   do {
      cout<<"Nhập lựa chọn của bạn: "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: push();
         break;
         case 2: pop();
         break;
         case 3: print();
         break;
         case 4: cout<<"Kết thúc"<<endl;
         break;
         default: cout<<"Lựa chọn của bạn không đúng"<<endl;
      }
   } while(ch!=4);
    
   cout<<"\n--------------------------\n";
   cout<<"Chương trình này được đăng tại Freetuts.net";
}