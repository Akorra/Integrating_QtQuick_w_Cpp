#include "provider.h"
#include "Model/connector.h"
#include "Model/settings.h"
#include <QString>
#include "utils.h"

static QString SETTINGS_FILE = QStringLiteral("settings.json");

std::unique_ptr<Settings> Provider::m_instanceSettings=nullptr;
std::unique_ptr<Connector> Provider::m_instanceConnector=nullptr;

Settings& Provider::GetSettingsAsSingleton(){
    if(m_instanceSettings == nullptr){
        m_instanceSettings = Utils::make_unique<Settings>(nullptr, SETTINGS_FILE);
    }
    return *m_instanceSettings;
}

Connector& Provider::GetConnectorForSingleUse(){
    if(m_instanceConnector == nullptr){
        m_instanceConnector = Utils::make_unique<Connector> (nullptr, GetSettingsAsSingleton());
    }
    return *m_instanceConnector;
}
