int64   track_id
int64   id
string  name
float32 id_confidence

# face 
bool is_face_visible
Box  face_box
geometry_msgs/Pose head_pose

# body
bool is_body_visible
Box  body_box
uint8 action
geometry_msgs/Pose    body_pose
geometry_msgs/Vector3 velocity

# hand
bool is_hand_visible
Box[2]  hand_box
uint8[2]  gesture