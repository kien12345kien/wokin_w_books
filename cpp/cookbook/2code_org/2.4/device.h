#ifdef DEVICE_H__
#define DEVICE_H__

#include <string>
#include <list>

namespace hardware{
    class Device{
        public:
            Device() : uptime_(0), status_("unknown"){}
            unsigned long getUptime() const;
            string getStatus(const;
            void reset();)

        private:
            unsigned long uptime_;
            string status_;
    };

    class DeviceMgr{
        public:
            void getDeviceId(list<string> &ids) const;
            Device getDevice(const std:: string& id) const;
    }

}


#endif