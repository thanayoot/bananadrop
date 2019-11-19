#ifndef CLOUD_H
#define CLOUD_H
#include <GL/glfw3.h>

#include <iostream>

#include <time.h>
#include <stdlib.h>

class cloud
{
    public:
        cloud();
        virtual ~cloud();

        void Update();
        void Render();
        void SetPos(float  X, float  Y);
        void GetPos(float *X, float *Y);
        void SetTexID(int tex_id);
        void GetTexID(int *tex_id);

    protected:

    private:
        float X_;
        float Y_;
        float r_;

        int x_ = 0;
        int y_ = 0;
        GLuint tex_id_;
};

#endif // CLOUD_H
