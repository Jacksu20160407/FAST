#ifndef VOLUMERENDERER_HPP_
#define VOLUMERENDERER_HPP_

#include "Renderer.hpp"
#include "ImageData.hpp"

namespace fast {

class VolumeRenderer : public Renderer {
    FAST_OBJECT(VolumeRenderer)
    public:
        //void setInput(ImageData::pointer image);
        //void setThreshold(float threshold);
        //void keyPressEvent(QKeyEvent* event);
        //void mouseMoveEvent(QMouseEvent* event, View* view);
        //void resizeEvent(QResizeEvent* event);
    private:
        VolumeRenderer();
        void execute() {};
        void draw() {};

        OpenCLDevice::pointer mDevice;
        ImageData::pointer mInput;

        float mThreshold;
        GLuint VBO_ID;
        bool mHasCreatedTriangles;
        unsigned int totalSum;
        float camX,camY,camZ;
        float rotationX,rotationY;
        //unsigned int windowWidth, windowHeight;
        float scalingFactorx, scalingFactory, scalingFactorz;
        float translationx, translationy, translationz;
        unsigned int HPSize;
        cl::Program program;
        // HP
        std::vector<cl::Image3D> images;
        std::vector<cl::Buffer> buffers;

        unsigned int mWidth, mHeight;
};

} // namespace fast




#endif /* VOLUMERENDERER_HPP_*/