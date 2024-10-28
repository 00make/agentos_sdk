#stamp - current system time
time stamp

#executions - times of executions
uint32 executions

#invoker - name of invoker skill
string invoker

#invoke_priority - priority of this invoke
int32 invoke_priority

#hold time in seconds to avoid being overwrited by another invoke 
float32 hold_time

#state - current state of execution. 0:IDLE, 1:EXECUTING, 2:FINISH, 3:HOLD_ON, 4:HOLD_OFF, 5:DONE
int32 state

#start_stamp - system time when starting execution
time start_stamp

#finish_stamp - system time when finishing execution
time finish_stamp
