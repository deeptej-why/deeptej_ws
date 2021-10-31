
(cl:in-package :asdf)

(defsystem "custom_msg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "count" :depends-on ("_package_count"))
    (:file "_package_count" :depends-on ("_package"))
    (:file "matrix" :depends-on ("_package_matrix"))
    (:file "_package_matrix" :depends-on ("_package"))
    (:file "status" :depends-on ("_package_status"))
    (:file "_package_status" :depends-on ("_package"))
  ))