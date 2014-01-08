#ifndef DEFAULTCLIP_H
#define DEFAULTCLIP_H

#include <clip.h>


class defaultClip : public clip
{
    public:
        defaultClip();
        virtual ~defaultClip();

        void update();
        void draw();

    protected:
    private:
};

#endif // DEFAULTCLIP_H
