/**
* @author Abdelaziz Ibrahim
* @date 6.12.2024
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "SchematicEditor.hpp"
#include "GUI_Component.hpp"
#include "Component.hpp"
void SchematicEditor::NetListGenerator() {
	std::vector<QString> netlistentries;


	for (auto item : scene->items()) {
		if (auto component = dynamic_cast<GUI_Component*>(item)) {
			QString nodeString;
			GUI_Component::Type type = component->getType();
			QString id = component->GUI_Component::getId();
			double value = component->getVal();
			for (const auto& item2 : component->getNodeConnections()) {
				int nodeid = item2.first;
				nodeString += QString::number(nodeid) + " ";
			}
		}

	}
	QString single_entry = QString("%1 %2 %3 %4\n")
		.arg(type)
		.arg(id)
		.arg(nodeString.trimmed())
		.arg(value);
	netlistentries.push_back(single_entry);
}
qDebug() << "Netlist :\n";
for (const auto& entry : netlistentries) {
	qDebug() << entry;
}
};
/**
* @author Abdelaziz Ibrahim
* @date 6.12.2024
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "SchematicEditor.hpp"
#include "GUI_Component.hpp"
#include "Component.hpp"
void SchematicEditor::NetListGenerator() {
	std::vector<QString> netlistentries;


	for (auto item : scene->items()) {
		if (auto component = dynamic_cast<GUI_Component*>(item)) {
			QString nodeString;
			GUI_Component::Type type = component->getType();
			QString id = component->GUI_Component::getId();
			double value = component->getVal();
			for (const auto& item2 : component->getNodeConnections()) {
				int nodeid = item2.first;
				nodeString += QString::number(nodeid) + " ";
			}
		}

	}
	QString single_entry = QString("%1 %2 %3 %4\n")
		.arg(type)
		.arg(id)
		.arg(nodeString.trimmed())
		.arg(value);
	netlistentries.push_back(single_entry);
}
qDebug() << "Netlist :\n";
for (const auto& entry : netlistentries) {
	qDebug() << entry;
}
};
