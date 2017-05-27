/*
 * Copyright (c) 2015 ArmyAnt
 * 版权所有 (c) 2015 ArmyAnt
 *
 * Licensed under the BSD License, Version 2.0 (the License);
 * 本软件使用BSD协议保护, 协议版本:2.0
 * you may not use this file except in compliance with the License.
 * 使用本开源代码文件的内容, 视为同意协议
 * You can read the license content in the file "LICENSE" at the root of this project
 * 您可以在本项目的根目录找到名为"LICENSE"的文件, 来阅读协议内容
 * You may also obtain a copy of the License at
 * 您也可以在此处获得协议的副本:
 *
 *     http://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
 * See the License for the specific language governing permissions and limitations under the License.
 * 请在特定限制或语言管理权限下阅读协议
 */

#ifndef AA_LOG_H_2017_5_25
#define AA_LOG_H_2017_5_25

#include "AAString.h"

namespace ArmyAnt{



/*	* @ author			: Jason
	* @ date			: 5/25/2017
	* @ last update	    : 5/25/2017
	* @ summary			: 用于记录C++日志，标记时间和所在文件、行号，将日志输出到文件以及控制台，以互斥锁方式保证线程安全
	* @ uncompleted		:
	* @ untested		: 所有功能（打开文件，输出日志，输出到控制台）
	* @ issue			:
	*/

class ARMYANTLIB_API LoggerBase {
public:
    LoggerBase();
    ~LoggerBase();

public:
    struct Contents{
        bool datetime = true;
        bool tag = true;
        bool function = true;
        bool fileAndLine = false;
        bool toConsole = true;
        bool toConsoleIfFileFailed = true;
        bool warningIfFileFailed = false;
        String lineEnding = "\r\n";

        static const Contents& defaultSetting;
    };

public:
    bool initLog(String filepath, const Contents& setting = Contents::defaultSetting);
    bool pushLog(String date, String time, String function, String file, String line, String tag, String level, String log);

    AA_FORBID_ASSGN_OPR(LoggerBase);
    AA_FORBID_COPY_CTOR(LoggerBase);
};

}

#if defined __FUNCTION__
#define AA_LOG(logger, tag, level, log) logger.pushLog(__DATE__, __TIME__, __FUNCTION__, __FILE__, __LINE__, tag, level, log);
#elif defined __FUNC__
#define AA_LOG(logger, tag, level, log) logger.pushLog(__DATE__, __TIME__, __FUNC__, __FILE__, __LINE__, tag, level, log);
#else
#define AA_LOG(logger, tag, level, log) logger.pushLog(__DATE__, __TIME__, __func__, __FILE__, __LINE__, tag, level, log);
#endif // defined __FUNCTION__

#endif //AA_LOG_H_2017_5_25
