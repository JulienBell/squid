/*
 * Copyright (C) 1996-2016 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#ifndef SQUID_SRC_AUTH_CONFIG_H
#define SQUID_SRC_AUTH_CONFIG_H

#if USE_AUTH

#include "auth/SchemeConfig.h"
#include "auth/SchemesConfig.h"

namespace Auth
{

class Config
{
public:
    /// set of auth_params directives
    Auth::ConfigVector schemes;

    /// set of auth_schemes directives
    Auth::SchemesConfig *schemeLists = nullptr;
};

extern Auth::Config TheConfig;

} // namespace Auth

#endif /* USE_AUTH */
#endif /* SQUID_SRC_AUTH_CONFIG_H */

