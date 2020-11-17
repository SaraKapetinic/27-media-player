#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMainWindow>
#include <QWidget>
#include <QMediaPlayer>

class QAbstractButton;
class QSlider;
class QGraphicsVideoItem;

class videoplayer : public QWidget
{
    Q_OBJECT //Macro koji mora da se nalazi u klasi ukoliko ona deklarise signale ili slotove.

public:
    videoplayer(QWidget *parent = nullptr);
    ~videoplayer();
    bool isAvaliable() const;

public slots:
    void openFile(); //TODO
    void play(); //TODO

private slots:
    void mediaStateChanged(QMediaPlayer::State state);
    //TODO

private:
    QMediaPlayer* m_mediaPlayer = nullptr;
    QGraphicsVideoItem* m_videoItem = nullptr;
    QAbstractButton* m_playButton = nullptr;
    QSlider* m_Slider = nullptr;

};
#endif // VIDEOPLAYER_H