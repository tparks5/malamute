/*  =========================================================================
    malamute - ZeroMQ Message Broker

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Malamute Project.                         
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef __PLATFORM_H_INCLUDED__
#define __PLATFORM_H_INCLUDED__

//  This file provides the configuration for Linux, Windows, and OS/X
//  as determined by MLM_HAVE_XXX macros passed from project.gyp

//  Check that we're being called from our gyp makefile
#ifndef MLM_GYP_BUILD
#   error "foreign platform.h detected, please re-configure"
#endif

#define MLM_BUILD_DRAFT_API

#if defined MLM_HAVE_WINDOWS

#elif defined MLM_HAVE_OSX
#   define MLM_HAVE_IFADDRS
#   define HAVE_GETIFADDRS
#   define HAVE_NET_IF_H
#   define HAVE_NET_IF_MEDIA_H

#elif defined MLM_HAVE_LINUX
#   define MLM_HAVE_IFADDRS
#   define HAVE_GETIFADDRS
#   define HAVE_LINUX_WIRELESS_H
#   define HAVE_NET_IF_H
#   define HAVE_NET_IF_MEDIA_H

#else
#   error "No platform defined, abandoning"
#endif

#endif
