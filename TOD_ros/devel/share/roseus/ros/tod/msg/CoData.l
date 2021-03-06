;; Auto-generated. Do not edit!


(when (boundp 'tod::CoData)
  (if (not (find-package "TOD"))
    (make-package "TOD"))
  (shadow 'CoData (find-package "TOD")))
(unless (find-package "TOD::CODATA")
  (make-package "TOD::CODATA"))

(in-package "ROS")
;;//! \htmlinclude CoData.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass tod::CoData
  :super ros::object
  :slots (_data _msglabel _sceneid _imgid ))

(defmethod tod::CoData
  (:init
   (&key
    ((:data __data) (instance std_msgs::Float32MultiArray :init))
    ((:msglabel __msglabel) "")
    ((:sceneid __sceneid) 0)
    ((:imgid __imgid) 0)
    )
   (send-super :init)
   (setq _data __data)
   (setq _msglabel (string __msglabel))
   (setq _sceneid (round __sceneid))
   (setq _imgid (round __imgid))
   self)
  (:data
   (&rest __data)
   (if (keywordp (car __data))
       (send* _data __data)
     (progn
       (if __data (setq _data (car __data)))
       _data)))
  (:msglabel
   (&optional __msglabel)
   (if __msglabel (setq _msglabel __msglabel)) _msglabel)
  (:sceneid
   (&optional __sceneid)
   (if __sceneid (setq _sceneid __sceneid)) _sceneid)
  (:imgid
   (&optional __imgid)
   (if __imgid (setq _imgid __imgid)) _imgid)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Float32MultiArray _data
    (send _data :serialization-length)
    ;; string _msglabel
    4 (length _msglabel)
    ;; int16 _sceneid
    2
    ;; int16 _imgid
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Float32MultiArray _data
       (send _data :serialize s)
     ;; string _msglabel
       (write-long (length _msglabel) s) (princ _msglabel s)
     ;; int16 _sceneid
       (write-word _sceneid s)
     ;; int16 _imgid
       (write-word _imgid s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Float32MultiArray _data
     (send _data :deserialize buf ptr-) (incf ptr- (send _data :serialization-length))
   ;; string _msglabel
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _msglabel (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _sceneid
     (setq _sceneid (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _imgid
     (setq _imgid (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get tod::CoData :md5sum-) "ceef3e91fd77e2286be70524a958bbe2")
(setf (get tod::CoData :datatype-) "tod/CoData")
(setf (get tod::CoData :definition-)
      "# Data Structure for Saving Coproducts

std_msgs/Float32MultiArray data
string msglabel
int16 sceneid
int16 imgid
================================================================================
MSG: std_msgs/Float32MultiArray
# Please look at the MultiArrayLayout message definition for
# documentation on all multiarrays.

MultiArrayLayout  layout        # specification of data layout
float32[]         data          # array of data


================================================================================
MSG: std_msgs/MultiArrayLayout
# The multiarray declares a generic multi-dimensional array of a
# particular data type.  Dimensions are ordered from outer most
# to inner most.

MultiArrayDimension[] dim # Array of dimension properties
uint32 data_offset        # padding elements at front of data

# Accessors should ALWAYS be written in terms of dimension stride
# and specified outer-most dimension first.
# 
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
#
# A standard, 3-channel 640x480 image with interleaved color channels
# would be specified as:
#
# dim[0].label  = \"height\"
# dim[0].size   = 480
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
# dim[1].label  = \"width\"
# dim[1].size   = 640
# dim[1].stride = 3*640 = 1920
# dim[2].label  = \"channel\"
# dim[2].size   = 3
# dim[2].stride = 3
#
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.

================================================================================
MSG: std_msgs/MultiArrayDimension
string label   # label of given dimension
uint32 size    # size of given dimension (in type units)
uint32 stride  # stride of given dimension
")



(provide :tod/CoData "ceef3e91fd77e2286be70524a958bbe2")


