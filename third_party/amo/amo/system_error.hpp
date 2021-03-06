﻿/*
 * Copyright (c) 2014, Peter Thorson. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the WebSocket++ Project nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL PETER THORSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef AMO_SYSTEM_ERROR_HPP
#define AMO_SYSTEM_ERROR_HPP

  
#ifdef BOOST_NO_CXX11_HDR_SYSTEM_ERROR
#include <amo/config.hpp>
#else
#include <system_error>
#endif

namespace amo {


#ifdef BOOST_NO_CXX11_HDR_SYSTEM_ERROR
	namespace errc = boost::system::errc;
	using boost::system::error_code;
	using boost::system::error_category;
	using boost::system::error_condition;
	using boost::system::system_error;
	#define _AMO_ERROR_CODE_ENUM_NS_START_ namespace boost { namespace system {
	#define _AMO_ERROR_CODE_ENUM_NS_END_ }}
#else
	using std::errc;
	using std::error_code;
	using std::error_category;
	using std::error_condition;
	using std::system_error;
	#define _AMO_ERROR_CODE_ENUM_NS_START_ namespace std {
	#define _AMO_ERROR_CODE_ENUM_NS_END_ }
#endif


} // namespace amo

#endif // AMO_SYSTEM_ERROR_HPP
