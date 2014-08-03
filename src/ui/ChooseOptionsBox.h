/********************************************************************
    Copyright (c) 2013-2014 - QSanguosha-Hegemony Team

    This file is part of QSanguosha-Hegemony.

    This game is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3.0 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    See the LICENSE file for more details.

    QSanguosha-Hegemony Team
    *********************************************************************/

#ifndef _CHOOSE_OPTIONS_BOX_H
#define _CHOOSE_OPTIONS_BOX_H

#include "TimedProgressBar.h"
#include "GraphicsBox.h"

class Button;

class ChooseOptionsBox : public GraphicsBox {
    Q_OBJECT

public:
    explicit ChooseOptionsBox();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

    inline void setSkillName(const QString &skillName) { skillName = skillName; }
    void clear();

public slots:
    void chooseOption(const QStringList &options);
    void reply();

private:
    int optionsNumber;
    QStringList options;
    QString skillName;
    QList<Button *> buttons;
    static const int defaultButtonWidth = 100;
    static const int defaultButtonHeight = 30;
    static const int top_dark_bar = 27;
    static const int topBlankWidth = 42;
    static const int bottomBlankWidth = 25;
    static const int interval = 15;
    static const int outerBlankWidth = 37;

    QGraphicsProxyWidget *progress_bar_item;
    QSanCommandProgressBar *progressBar;
};

#endif // _CHOOSE_OPTIONS_BOX_H
