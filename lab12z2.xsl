<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
 <html>
<head><title>Attestation</title>
<style>
    h1 {
        text-align: center;
    }
    table {
        text-align: center;
        margin: auto;
        width: 1000px;
        height: 300px;
        font-size: 30px;
        font-family: 'Arial';
    }
    
</style>
</head>
 <body>
 <h1>Attestation 2021 first part</h1>
 <table border="3">
 <tr bgcolor="grave">
 <th>Name</th>
 <th>Lesson</th>
  <th>Mark</th>
 </tr>
 <xsl:for-each select="ATTESTATION/STUDENT">
<tr bgcolor="gold">
<td><xsl:value-of select="NAME"/></td>
<td>Computer Markup Languages</td>
 <xsl:choose>
 <xsl:when test="MARK >= 8">
 <td bgcolor="green">
 <xsl:value-of select="MARK"/></td>
 </xsl:when>
 <xsl:when test="MARK > 3">
 <td bgcolor="grey">
 <xsl:value-of select="MARK"/></td>
 </xsl:when>
 <xsl:when test="MARK > 0">
 <td bgcolor="red">
 <xsl:value-of select="MARK"/></td>
 </xsl:when>
 <xsl:otherwise>
 <td><xsl:value-of select="MARK"/></td>
 </xsl:otherwise>
 </xsl:choose>
 </tr>
 </xsl:for-each>
 </table>
 </body>
 </html>
</xsl:template>
</xsl:stylesheet>