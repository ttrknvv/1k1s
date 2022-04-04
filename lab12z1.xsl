<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
 <html>
<head><title>My first template rule</title>
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
 <h1>My CD Collection</h1>
 <table border="3">
 <tr bgcolor="#9acd32">
 <th>Street</th>
 <th>Owner</th>
  <th>Square</th>
 </tr>
 <xsl:for-each select="territory/house">
 <xsl:sort select="square" order="ascending"/>
 <tr bgcolor="pink">
 <td><xsl:value-of select="street"/></td>
  <td><xsl:value-of select="owner"/></td>
 <td><xsl:value-of select="square"/></td>
 </tr>
 </xsl:for-each>
 </table>
 </body>
 </html>
</xsl:template>
</xsl:stylesheet>