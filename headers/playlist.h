#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QListWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QWidget>

class playlist : public QWidget
{
     public:
	playlist(QWidget* parent = nullptr, QMediaPlayer* player = nullptr);
	QMediaPlaylist* m_playlist;
	QListWidget* m_playlist_entries;
	QMediaPlayer* m_player;
	void loadPlaylist(QList<QUrl> urls);
	void showPlaylist();
	QList<QUrl> listUrls;
};

#endif  // PLAYLIST_H
