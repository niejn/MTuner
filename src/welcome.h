//--------------------------------------------------------------------------//
/// Copyright (c) 2017 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#ifndef RTM_MTUNER_WELCOME_H
#define RTM_MTUNER_WELCOME_H

#include <mtuner/.qt/qt_ui/welcome_ui.h>

class WelcomeDialog : public QDialog
{
	Q_OBJECT

public:
	WelcomeDialog(QWidget* _parent = 0, Qt::WindowFlags _flags = 0);
	void changeEvent(QEvent* _event);

Q_SIGNALS:
	void setupSymbols();
	void readDocumentation();

private:
	Ui::Welcome ui;
};

#endif // RTM_MTUNER_WELCOME_H
