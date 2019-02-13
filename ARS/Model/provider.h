#ifndef PROVIDER_H
#define PROVIDER_H

#include <memory>

namespace Ps {
    class Settings;
    class Provider final{
        public:
            Provider();
            static Settings& GetSettingsAsSingletons();
        private:
            static std::unique_ptr<Settings> m_instanceSettings;
            explicit Provider(const Provider& rhs) = delete;
            Provider& operator= (const Provider& rhs) = delete;
            Settings &GetSettingsAsSingleton();
    };

}

#endif // PROVIDER_H
