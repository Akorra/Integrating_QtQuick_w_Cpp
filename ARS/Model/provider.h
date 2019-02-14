#ifndef PROVIDER_H
#define PROVIDER_H

#pragma once
#include <memory>

class Settings;
class Connector;

class Provider final{
    public:
        Provider();
        static Settings& GetSettingsAsSingleton();
        static Connector& GetConnectorForSingleUse();

    private:
        static std::unique_ptr<Settings> m_instanceSettings;
        static std::unique_ptr<Connector> m_instanceConnector;

        explicit Provider(const Provider& rhs) = delete;
        Provider& operator= (const Provider& rhs) = delete;
};

#endif // PROVIDER_H
