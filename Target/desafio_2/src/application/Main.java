/*
 * Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na
   linguagem que desejar, que calcule e retorne:
 *
 * - O menor valor de faturamento ocorrido em um dia do mês;
 * - O maior valor de faturamento ocorrido em um dia do mês;
 * - Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.
 * 
 * IMPORTANTE:
 * a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
 * b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser
   ignorados no cálculo da média;
*/

package application;

import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.SequenceInputStream;
import java.util.Arrays;
import java.util.Collections;
import java.util.Enumeration;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

public class Main {
    public static void main(String[] args) throws ParserConfigurationException,
            SAXException, IOException {
        try {
            File file = new File("dados.xml");
            DocumentBuilder db = DocumentBuilderFactory.newInstance().newDocumentBuilder();
            Enumeration<InputStream> streams = Collections.enumeration(
                    Arrays.asList(new InputStream[] {
                            new ByteArrayInputStream("<root>".getBytes()),
                            new FileInputStream(file),
                            new ByteArrayInputStream("</root>".getBytes()),
                    }));
            SequenceInputStream sequenceInputStream = new SequenceInputStream(streams);
            Document document = db.parse(sequenceInputStream);
            NodeList nodeList = document.getElementsByTagName("row");
            int size = nodeList.getLength();
            double values[] = new double[size];
            for (int i = 0; i < size; i++) {
                Node node = nodeList.item(i);
                if (node.getNodeType() == Node.ELEMENT_NODE) {
                    Element element = (Element) node;
                    values[i] = Double.parseDouble(element.getElementsByTagName("valor").item(0).getTextContent());
                }
            }

            double max = getMax(values, size);
            double min = getMin(values, size, max);
            double avg = calculateAvg(values, size);
            int dayMoreAvg = getDayMoreAvg(values, size, avg);

            System.out.printf("Menor valor de faturamento: %.2f\n", min);
            System.out.printf("Maior valor de faturamento: %.2f\n", max);
            System.out.println("Número de dias no mês em que o valor foi superior à média: " + dayMoreAvg);

        } catch (ParserConfigurationException e) {
            System.out.println(e);
        } catch (SAXException e) {
            System.out.println(e);
        } catch (IOException e) {
            System.out.println(e);
        }
    }

    public static double getMax(double[] values, int size) {
        double max = values[0];

        for (int i = 0; i < size; i++) {
            if (values[i] > max) {
                max = values[i];
            }
        }
        return max;
    }

    public static double getMin(double[] values, int size, double max) {
        double min = max;

        for (int i = 0; i < size; i++) {
            if (values[i] != 0.0) {
                if (values[i] < min) {
                    min = values[i];
                }
            }
        }
        return min;
    }

    public static double calculateAvg(double[] values, int size) {
        double avg, sum = 0;
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (values[i] != 0.0) {
                count++;
                sum += values[i];
            }
        }
        avg = sum / count;

        return avg;
    }

    public static int getDayMoreAvg(double[] values, int size, double avg) {
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (values[i] > avg)
                count++;
        }
        return count;
    }
}
