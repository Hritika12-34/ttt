cm = confusion_matrix(y_test, y_pred)
sns.heatmap(cm, annot=True, xticklabels=['Circle', 'Square', 'Triangle'],
            yticklabels=['Circle', 'Square', 'Triangle'])
plt.title("Confusion Matrix")
plt.xlabel("Predicted")
plt.ylabel("True")
plt.show()
