// Copyright 2017 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

class QString;
class ControlReference;

namespace ciface
{
namespace Core
{
class Device;
class DeviceQualifier;
}
}

namespace MappingCommon
{
enum class Quote
{
  On,
  Off
};

QString GetExpressionForControl(const QString& control_name,
                                const ciface::Core::DeviceQualifier& control_device,
                                const ciface::Core::DeviceQualifier& default_device,
                                Quote quote = Quote::On);
QString DetectExpression(ControlReference* reference, ciface::Core::Device* device,
                         const ciface::Core::DeviceQualifier& default_device,
                         Quote quote = Quote::On);
}  // namespace MappingCommon
