
(cl:in-package :asdf)

(defsystem "udemy_cpp_pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "OddEvencheck" :depends-on ("_package_OddEvencheck"))
    (:file "_package_OddEvencheck" :depends-on ("_package"))
    (:file "TurnCamera" :depends-on ("_package_TurnCamera"))
    (:file "_package_TurnCamera" :depends-on ("_package"))
  ))