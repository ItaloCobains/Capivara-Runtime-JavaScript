#include <v8.h>
#include <uv.h>

uv_loop_t *loop;

class Timer 
{
    public:
        static void Initialize(uv_loop_t *evloop)
        {
            loop = evloop;
        }

        static void Timeout(const v8::FunctionCallbackInfo<v8::Value> &args)
        {
            auto isolate = args.GetIsolate();
        }
        
};