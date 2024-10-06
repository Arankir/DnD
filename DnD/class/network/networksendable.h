#pragma once

#include <string>

typedef std::string SerializedData;
typedef std::string CompactedData;

class NetworkSendable
{
public:
    NetworkSendable();
    virtual ~NetworkSendable() = default;

    virtual std::string className() = 0;
    int version() const;

    CompactedData compact(const SerializedData &data);
    SerializedData uncompact(const CompactedData &compactedData);
    size_t crc() const;

protected:
    virtual SerializedData serialize() const = 0;
    virtual void deserialize(const SerializedData &serializedData) = 0;
    void setNeedRehash(bool newNeedRehash);
    bool needRehash() const;

private:
    bool m_needRehash = true;

    int64_t m_id;
    const int m_version;
    CompactedData m_data;
    size_t m_crc;
};
