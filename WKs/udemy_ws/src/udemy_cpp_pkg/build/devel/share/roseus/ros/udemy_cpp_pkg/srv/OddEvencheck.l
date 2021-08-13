;; Auto-generated. Do not edit!


(when (boundp 'udemy_cpp_pkg::OddEvencheck)
  (if (not (find-package "UDEMY_CPP_PKG"))
    (make-package "UDEMY_CPP_PKG"))
  (shadow 'OddEvencheck (find-package "UDEMY_CPP_PKG")))
(unless (find-package "UDEMY_CPP_PKG::ODDEVENCHECK")
  (make-package "UDEMY_CPP_PKG::ODDEVENCHECK"))
(unless (find-package "UDEMY_CPP_PKG::ODDEVENCHECKREQUEST")
  (make-package "UDEMY_CPP_PKG::ODDEVENCHECKREQUEST"))
(unless (find-package "UDEMY_CPP_PKG::ODDEVENCHECKRESPONSE")
  (make-package "UDEMY_CPP_PKG::ODDEVENCHECKRESPONSE"))

(in-package "ROS")





(defclass udemy_cpp_pkg::OddEvencheckRequest
  :super ros::object
  :slots (_number ))

(defmethod udemy_cpp_pkg::OddEvencheckRequest
  (:init
   (&key
    ((:number __number) 0)
    )
   (send-super :init)
   (setq _number (round __number))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:serialization-length
   ()
   (+
    ;; int32 _number
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _number
       (write-long _number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _number
     (setq _number (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass udemy_cpp_pkg::OddEvencheckResponse
  :super ros::object
  :slots (_answer ))

(defmethod udemy_cpp_pkg::OddEvencheckResponse
  (:init
   (&key
    ((:answer __answer) "")
    )
   (send-super :init)
   (setq _answer (string __answer))
   self)
  (:answer
   (&optional __answer)
   (if __answer (setq _answer __answer)) _answer)
  (:serialization-length
   ()
   (+
    ;; string _answer
    4 (length _answer)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _answer
       (write-long (length _answer) s) (princ _answer s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _answer
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _answer (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass udemy_cpp_pkg::OddEvencheck
  :super ros::object
  :slots ())

(setf (get udemy_cpp_pkg::OddEvencheck :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get udemy_cpp_pkg::OddEvencheck :datatype-) "udemy_cpp_pkg/OddEvencheck")
(setf (get udemy_cpp_pkg::OddEvencheck :request) udemy_cpp_pkg::OddEvencheckRequest)
(setf (get udemy_cpp_pkg::OddEvencheck :response) udemy_cpp_pkg::OddEvencheckResponse)

(defmethod udemy_cpp_pkg::OddEvencheckRequest
  (:response () (instance udemy_cpp_pkg::OddEvencheckResponse :init)))

(setf (get udemy_cpp_pkg::OddEvencheckRequest :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get udemy_cpp_pkg::OddEvencheckRequest :datatype-) "udemy_cpp_pkg/OddEvencheckRequest")
(setf (get udemy_cpp_pkg::OddEvencheckRequest :definition-)
      "int32 number 
---
string answer 


")

(setf (get udemy_cpp_pkg::OddEvencheckResponse :md5sum-) "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(setf (get udemy_cpp_pkg::OddEvencheckResponse :datatype-) "udemy_cpp_pkg/OddEvencheckResponse")
(setf (get udemy_cpp_pkg::OddEvencheckResponse :definition-)
      "int32 number 
---
string answer 


")



(provide :udemy_cpp_pkg/OddEvencheck "4ff0b0ab1ed04611e3a2b4090af9ee4f")


