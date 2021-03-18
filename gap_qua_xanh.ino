//****bố trí bánh xe****//
//bánh 1 -------- bánh 2
//bánh 3 -------- bánh 4
//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40

void chay_gap_qua_xanh(){

  chay_do_line_doc_cam_bien (cb_truoc_sau, chay_lui, 30, 1 , 1, 90, 90, 25); 

   delay(500);
  
  quay_bat_line(quay_phai, 80, 36);

   delay(500);

   chay_do_line_do_encoder (cb_truoc, chay_toi, 5000, 0, 235, 235, 30);    

   delay(1000);

  chay_do_line_doc_cam_bien(cb_trai_phai, chay_phai, 36, 1 , 1, 100, 105, 25); 

   delay(500);

  chay_do_line_doc_cam_bien(cb_truoc_sau, chay_toi, 42, 1 , 1, 100, 105, 25); 

   delay(500);
   
  quay_bat_line(quay_phai, 120, 36);

   delay(500);

   chay_do_line_do_encoder (cb_truoc, chay_toi, 2200, 1, 100, 100, 25);

  delay(2000);
  chay_do_line_do_encoder (cb_truoc_sau, chay_lui, 100, 0, 100, 100, 30); 

   delay(1000);

  chay_do_line_do_encoder (cb_trai_phai, chay_phai, 1500, 0, 120, 120, 30); 

   delay(1000);
   
  chay_do_line_doc_cam_bien(cb_truoc, chay_toi, 30, 1 , 1, 120, 120, 25); 

   delay(500);
   
   chay_do_line_doc_cam_bien(cb_trai_phai, chay_trai, 36, 1 , 1, 90, 90, 25); 

   delay(500);

   chay_do_line_doc_cam_bien(cb_truoc, chay_toi, 31, 1 , 1, 120, 120, 25); 

   delay(500);

  quay_bat_line(quay_phai, 120, 42);

  delay(1000);

  chay_do_line_do_encoder (cb_truoc, chay_toi, 500, 0, 120, 120, 30); 

   delay(2000);

}