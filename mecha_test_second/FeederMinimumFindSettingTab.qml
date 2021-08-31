import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Controls 1.4 as TabView

TabView.Tab{
    title: "Minimum Setting"
    Item{
        anchors.fill: parent
        anchors.margins: 20

        Label{
            id: minimumSettingTitle
            text: "Feeder Minimum Find Test Setting"
            font.pixelSize: 25
            font.bold: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Column{
            spacing: 10

            anchors{
                top: minimumSettingTitle.bottom
                left: parent.left
                topMargin: 50
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Initial Percentage "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.initialPercent
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.initialPercent = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "First Find Step "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.firstStep
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.firstStep = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Second Find Step "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.secondStep
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.secondStep = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Minimum Range "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.minimumRange
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.minimumRange = text
                    }
                }
            }
        }
        Column{
            id: minimumSettingSecondColumn
            spacing: 10

            anchors{
                top: minimumSettingTitle.bottom
                right: parent.right
                topMargin: 50
            }
            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Minimum Gram/min "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.minimumTarget
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.minimumTarget = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Minimum Find Count "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.findCount
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.findCount = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Minimum Measure Time "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.findTime
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.findTime = text
                    }
                }
            }

            Row{
                spacing: 10

                Label{
                    width: 180
                    text: "Final Test Count "
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }
                TextField{
                    width: 60
                    height: 30
                    text: feederMinimumFindViewModel.findCount
                    font.pixelSize: 15

                    onEditingFinished: {
                        feederMinimumFindViewModel.findCount = text
                    }
                }
            }
        }

        Column {
            spacing: 10
            anchors {
                top: minimumSettingSecondColumn.bottom
                topMargin: 60
                left: parent.left
                right: parent.right
                bottom: parent.bottom
            }

            Row {
                width: parent.width
                spacing: 60
                Label {
                    text: "Feeder1"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder1
                    onCheckedChanged: feederMinimumFindViewModel.feeder1 = checked
                }

                Label {
                    text: "Feeder2"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder2
                    onCheckedChanged: feederMinimumFindViewModel.feeder2
                }

                Label {
                    text: "Feeder3"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder3
                    onCheckedChanged: feederMinimumFindViewModel.feeder3 = checked
                }
            }

            Row {
                width: parent.width
                spacing: 60
                Label {
                    text: "Feeder4"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder4
                    onCheckedChanged: feederMinimumFindViewModel.feeder4 = checked
                }

                Label {
                    text: "Feeder5"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder5
                    onCheckedChanged: feederMinimumFindViewModel.feeder5 = checked
                }

                Label {
                    text: "Feeder6"
                    font.pixelSize: 15
                    anchors.verticalCenter: parent.verticalCenter
                }

                CheckBox {
                    checked: feederMinimumFindViewModel.feeder6
                    onCheckedChanged: feederMinimumFindViewModel.feeder6 = checked
                }
            }
        }
    }
}

