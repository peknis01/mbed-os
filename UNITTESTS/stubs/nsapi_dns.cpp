#include "netsocket/nsapi_dns.h"


nsapi_error_t nsapi_dns_query(NetworkStack *stack, const char *host,
        SocketAddress *addr, nsapi_version_t version)
{
    return NSAPI_ERROR_DNS_FAILURE;
}

extern "C" nsapi_error_t nsapi_dns_add_server(nsapi_addr_t addr)
{
    return NSAPI_ERROR_OK;
}
