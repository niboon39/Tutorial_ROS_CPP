; Auto-generated. Do not edit!


(cl:in-package udemy_cpp_pkg-srv)


;//! \htmlinclude OddEvencheck-request.msg.html

(cl:defclass <OddEvencheck-request> (roslisp-msg-protocol:ros-message)
  ((number
    :reader number
    :initarg :number
    :type cl:integer
    :initform 0))
)

(cl:defclass OddEvencheck-request (<OddEvencheck-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <OddEvencheck-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'OddEvencheck-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name udemy_cpp_pkg-srv:<OddEvencheck-request> is deprecated: use udemy_cpp_pkg-srv:OddEvencheck-request instead.")))

(cl:ensure-generic-function 'number-val :lambda-list '(m))
(cl:defmethod number-val ((m <OddEvencheck-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader udemy_cpp_pkg-srv:number-val is deprecated.  Use udemy_cpp_pkg-srv:number instead.")
  (number m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <OddEvencheck-request>) ostream)
  "Serializes a message object of type '<OddEvencheck-request>"
  (cl:let* ((signed (cl:slot-value msg 'number)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <OddEvencheck-request>) istream)
  "Deserializes a message object of type '<OddEvencheck-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'number) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<OddEvencheck-request>)))
  "Returns string type for a service object of type '<OddEvencheck-request>"
  "udemy_cpp_pkg/OddEvencheckRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OddEvencheck-request)))
  "Returns string type for a service object of type 'OddEvencheck-request"
  "udemy_cpp_pkg/OddEvencheckRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<OddEvencheck-request>)))
  "Returns md5sum for a message object of type '<OddEvencheck-request>"
  "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'OddEvencheck-request)))
  "Returns md5sum for a message object of type 'OddEvencheck-request"
  "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<OddEvencheck-request>)))
  "Returns full string definition for message of type '<OddEvencheck-request>"
  (cl:format cl:nil "int32 number ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'OddEvencheck-request)))
  "Returns full string definition for message of type 'OddEvencheck-request"
  (cl:format cl:nil "int32 number ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <OddEvencheck-request>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <OddEvencheck-request>))
  "Converts a ROS message object to a list"
  (cl:list 'OddEvencheck-request
    (cl:cons ':number (number msg))
))
;//! \htmlinclude OddEvencheck-response.msg.html

(cl:defclass <OddEvencheck-response> (roslisp-msg-protocol:ros-message)
  ((answer
    :reader answer
    :initarg :answer
    :type cl:string
    :initform ""))
)

(cl:defclass OddEvencheck-response (<OddEvencheck-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <OddEvencheck-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'OddEvencheck-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name udemy_cpp_pkg-srv:<OddEvencheck-response> is deprecated: use udemy_cpp_pkg-srv:OddEvencheck-response instead.")))

(cl:ensure-generic-function 'answer-val :lambda-list '(m))
(cl:defmethod answer-val ((m <OddEvencheck-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader udemy_cpp_pkg-srv:answer-val is deprecated.  Use udemy_cpp_pkg-srv:answer instead.")
  (answer m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <OddEvencheck-response>) ostream)
  "Serializes a message object of type '<OddEvencheck-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'answer))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'answer))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <OddEvencheck-response>) istream)
  "Deserializes a message object of type '<OddEvencheck-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'answer) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'answer) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<OddEvencheck-response>)))
  "Returns string type for a service object of type '<OddEvencheck-response>"
  "udemy_cpp_pkg/OddEvencheckResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OddEvencheck-response)))
  "Returns string type for a service object of type 'OddEvencheck-response"
  "udemy_cpp_pkg/OddEvencheckResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<OddEvencheck-response>)))
  "Returns md5sum for a message object of type '<OddEvencheck-response>"
  "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'OddEvencheck-response)))
  "Returns md5sum for a message object of type 'OddEvencheck-response"
  "4ff0b0ab1ed04611e3a2b4090af9ee4f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<OddEvencheck-response>)))
  "Returns full string definition for message of type '<OddEvencheck-response>"
  (cl:format cl:nil "string answer ~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'OddEvencheck-response)))
  "Returns full string definition for message of type 'OddEvencheck-response"
  (cl:format cl:nil "string answer ~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <OddEvencheck-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'answer))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <OddEvencheck-response>))
  "Converts a ROS message object to a list"
  (cl:list 'OddEvencheck-response
    (cl:cons ':answer (answer msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'OddEvencheck)))
  'OddEvencheck-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'OddEvencheck)))
  'OddEvencheck-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OddEvencheck)))
  "Returns string type for a service object of type '<OddEvencheck>"
  "udemy_cpp_pkg/OddEvencheck")