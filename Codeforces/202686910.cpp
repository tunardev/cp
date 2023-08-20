// https://codeforces.com/contest/1675/submission/202686910

import cv2
 
# Cascade sınıflandırıcısını yükleme
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
 
# Kamerayı başlatma
cap = cv2.VideoCapture(0)
 
while True:
    # Kameradan bir kare okuma
    ret, img = cap.read()
 
    # Kareyi gri tona dönüştürme
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
 
    # Yüzleri tespit etme
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
 
    # Yüzlerin etrafına dikdörtgen çizme
    for (x,y,w,h) in faces:
        cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
 
    # Kamerayı gösterme
    cv2.imshow('img',img)
 
    # Çıkış yapmak için 'q' tuşuna basma
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
 
# Belleği serbest bırakma ve pencereleri kapatma
cap.release()
cv2.destroyAllWindows()