/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef InstallRequestXml_h_
#define InstallRequestXml_h_


#include "Doc/CafInstallRequestDoc/CInstallRequestDoc.h"

#include "Doc/DocXml/CafInstallRequestXml/CafInstallRequestXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the InstallRequest class to/from XML
	namespace InstallRequestXml {

		/// Adds the InstallRequestDoc into the XML.
		void CAFINSTALLREQUESTXML_LINKAGE add(
			const SmartPtrCInstallRequestDoc installRequestDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the InstallRequestDoc from the XML.
		SmartPtrCInstallRequestDoc CAFINSTALLREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
