#include "networksendable.h"

NetworkSendable::NetworkSendable(): m_version(0)
{
}

size_t NetworkSendable::crc() const
{
    return m_crc;
}

bool NetworkSendable::needRehash() const
{
    return m_needRehash;
}

int NetworkSendable::version() const
{
    return m_version;
}

CompactedData NetworkSendable::compact(const SerializedData &data)
{
    //TODO
    return data;
}

std::string NetworkSendable::uncompact(const CompactedData &compactedData)
{
    //TODO
    return compactedData;
}

void NetworkSendable::setNeedRehash(bool newNeedRehash)
{
    m_needRehash = newNeedRehash;
}
