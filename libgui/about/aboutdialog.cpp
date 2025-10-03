/*
 * aboutdialog.cpp
 * Copyright 2017 - ~, Apin <apin.klas@gmail.com>
 *
 * This file is part of Sultan.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "aboutdialog.h"
#include "global_constant.h"
#include "ui_aboutdialog.h"

using namespace LibGUI;

AboutDialog::AboutDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AboutDialog) {
    ui->setupUi(this);
    setModal(true);
    ui->textBrowser->setOpenExternalLinks(true);
    ui->labelTitle->setText(LibG::CONSTANT::ABOUT_APP_NAME.arg(qApp->applicationVersion()));
    ui->textBrowser->setText(QStringLiteral("<center>%1 is simple POS software \
                    <br><br>Project can be found at <br><a href=\"%2\"> \
                    %3</a><br><br>\
                    </center>").arg(LibG::CONSTANT::APP_NAME).arg(LibG::CONSTANT::REPO_LINK).arg(LibG::CONSTANT::REPO_LINK));
}

AboutDialog::~AboutDialog() { delete ui; }
