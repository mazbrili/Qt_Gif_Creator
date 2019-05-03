#ifndef XYGIFCREATOR_H
#define XYGIFCREATOR_H

#include <QObject>
#include <QMutex>

class Gif_H;
class XYGifCreator : public QObject
{
    Q_OBJECT
public:
    explicit XYGifCreator(QObject *parent = nullptr);

public slots:
    void begin(const QString &file, int width, int height);
    void frame(const QImage &img);
    void end();

private:
    QMutex  mMutex;
    Gif_H  *mGif;
};

#endif // XYGIFCREATOR_H