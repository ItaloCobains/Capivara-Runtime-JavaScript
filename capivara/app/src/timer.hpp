#include <v8.h>
#include <uv.h>

uv_loop_t *loop;
class Timer 
{
    static void Initialize(uv_loop_t *evloop) 
    {
        loop = evloop;
    }

    static void TimeOut(const v8::FunctionCallbackInfo<v8::Value> &args) 
    {
        
    }
}